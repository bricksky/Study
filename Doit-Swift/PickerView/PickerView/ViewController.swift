//
//  ViewController.swift
//  PickerView
//
//  Created by 김동현 on 2023/03/10.
//

import UIKit

class ViewController: UIViewController, UIPickerViewDelegate,UIPickerViewDataSource {
    
    let MAX_ARRARY_NUM = 10
    let PICKER_VIEW_COLUMN = 1
    var imageArrary = [UIImage?]()
    let imageFileName = ["1.jpg", "2.jpg", "3.jpg", "4.jpg", "5.jpg",
                         "6.jpg", "7.jpg", "8.jpg", "9.jpg", "10.jpg" ]

    @IBOutlet var PickerImage: UIPickerView!
    @IBOutlet var lblImageFileName: UILabel!
    @IBOutlet var imageView: UIImageView!
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        for i in 0 ..< MAX_ARRARY_NUM {
            let image = UIImage(named: imageFileName[i])
            imageArrary.append(image)
        }
        
        lblImageFileName.text = imageFileName[0]
        imageView.image = imageArrary[0]
    }

    func numberOfComponents(in pickerView: UIPickerView) -> Int {
        return PICKER_VIEW_COLUMN
    }
    
    func pickerView(_ pickerView: UIPickerView, numberOfRowsInComponent
                    component: Int) -> Int {
        return imageFileName.count
    }
   // func pickerView(_pickerView: UIPickerView, titleForRow row: Int, forComponent
                //component: Int) -> String? {
        //return imageFileName[row]
    //}
    
    func pickerView(_ UIPickerView: UIPickerView, viewForRow row: Int, forComponent component: Int, reusing view: UIView?) -> UIView {
        let imageView = UIImageView(image:imageArrary[row])
        imageView.frame = CGRect(x:0, y:0, width:100, height:150)
        
        return imageView
    }
    
    
    func pickerView(_ pickerView: UIPickerView, didSelectRow row: Int, inComponent
                    component: Int) {
        lblImageFileName.text = imageFileName[row]
    }
}
