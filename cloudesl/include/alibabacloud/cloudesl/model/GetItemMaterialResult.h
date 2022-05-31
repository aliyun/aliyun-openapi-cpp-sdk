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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_GETITEMMATERIALRESULT_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_GETITEMMATERIALRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT GetItemMaterialResult : public ServiceResult
			{
			public:
				struct MaterialInfo
				{
					std::string gmtCreate;
					std::string materialId;
					std::string materialFeatureC;
					std::string materialFeatureD;
					std::string materialFeatureA;
					std::string materialFeatureB;
					std::string barCode;
					std::string itemName;
					std::string materialName;
				};


				GetItemMaterialResult();
				explicit GetItemMaterialResult(const std::string &payload);
				~GetItemMaterialResult();
				std::string getMessage()const;
				MaterialInfo getMaterialInfo()const;
				std::string getDynamicCode()const;
				std::string getErrorCode()const;
				std::string getDynamicMessage()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				MaterialInfo materialInfo_;
				std::string dynamicCode_;
				std::string errorCode_;
				std::string dynamicMessage_;
				std::string errorMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_GETITEMMATERIALRESULT_H_