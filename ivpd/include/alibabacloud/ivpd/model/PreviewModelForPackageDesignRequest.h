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

#ifndef ALIBABACLOUD_IVPD_MODEL_PREVIEWMODELFORPACKAGEDESIGNREQUEST_H_
#define ALIBABACLOUD_IVPD_MODEL_PREVIEWMODELFORPACKAGEDESIGNREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ivpd/IvpdExport.h>

namespace AlibabaCloud
{
	namespace Ivpd
	{
		namespace Model
		{
			class ALIBABACLOUD_IVPD_EXPORT PreviewModelForPackageDesignRequest : public RpcServiceRequest
			{
			public:
				struct ElementList
				{
					std::string imageUrl;
					std::string sideName;
				};

			public:
				PreviewModelForPackageDesignRequest();
				~PreviewModelForPackageDesignRequest();

				std::string getMaterialName()const;
				void setMaterialName(const std::string& materialName);
				std::vector<ElementList> getElementList()const;
				void setElementList(const std::vector<ElementList>& elementList);
				std::string getDataId()const;
				void setDataId(const std::string& dataId);
				std::string getMaterialType()const;
				void setMaterialType(const std::string& materialType);
				std::string getModelType()const;
				void setModelType(const std::string& modelType);
				std::string getCategory()const;
				void setCategory(const std::string& category);

            private:
				std::string materialName_;
				std::vector<ElementList> elementList_;
				std::string dataId_;
				std::string materialType_;
				std::string modelType_;
				std::string category_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IVPD_MODEL_PREVIEWMODELFORPACKAGEDESIGNREQUEST_H_