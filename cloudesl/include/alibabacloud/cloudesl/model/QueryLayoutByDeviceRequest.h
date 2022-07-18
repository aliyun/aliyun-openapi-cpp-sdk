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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_QUERYLAYOUTBYDEVICEREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_QUERYLAYOUTBYDEVICEREQUEST_H_

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
			class ALIBABACLOUD_CLOUDESL_EXPORT QueryLayoutByDeviceRequest : public RpcServiceRequest
			{

			public:
				QueryLayoutByDeviceRequest();
				~QueryLayoutByDeviceRequest();

				std::string getStoreId()const;
				void setStoreId(const std::string& storeId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getTemplateVersion()const;
				void setTemplateVersion(const std::string& templateVersion);
				std::string getEslBarCode()const;
				void setEslBarCode(const std::string& eslBarCode);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getEslModelId()const;
				void setEslModelId(const std::string& eslModelId);

            private:
				std::string storeId_;
				int pageNumber_;
				std::string templateVersion_;
				std::string eslBarCode_;
				int pageSize_;
				std::string eslModelId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_QUERYLAYOUTBYDEVICEREQUEST_H_