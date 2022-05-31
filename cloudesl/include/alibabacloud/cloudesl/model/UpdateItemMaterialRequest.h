/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_UPDATEITEMMATERIALREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_UPDATEITEMMATERIALREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT UpdateItemMaterialRequest : public RpcServiceRequest
			{

			public:
				UpdateItemMaterialRequest();
				~UpdateItemMaterialRequest();

				std::string getMaterialId()const;
				void setMaterialId(const std::string& materialId);
				std::string getBarCode()const;
				void setBarCode(const std::string& barCode);
				std::string getItemName()const;
				void setItemName(const std::string& itemName);
				std::string getMaterialFeatureA()const;
				void setMaterialFeatureA(const std::string& materialFeatureA);
				std::string getMaterialFeatureB()const;
				void setMaterialFeatureB(const std::string& materialFeatureB);
				std::string getMaterialFeatureC()const;
				void setMaterialFeatureC(const std::string& materialFeatureC);
				std::string getMaterialFeatureD()const;
				void setMaterialFeatureD(const std::string& materialFeatureD);

            private:
				std::string materialId_;
				std::string barCode_;
				std::string itemName_;
				std::string materialFeatureA_;
				std::string materialFeatureB_;
				std::string materialFeatureC_;
				std::string materialFeatureD_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_UPDATEITEMMATERIALREQUEST_H_