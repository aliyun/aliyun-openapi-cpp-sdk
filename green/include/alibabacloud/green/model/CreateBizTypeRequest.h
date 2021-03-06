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

#ifndef ALIBABACLOUD_GREEN_MODEL_CREATEBIZTYPEREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_CREATEBIZTYPEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT CreateBizTypeRequest : public RpcServiceRequest
			{

			public:
				CreateBizTypeRequest();
				~CreateBizTypeRequest();

				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getBizTypeImport()const;
				void setBizTypeImport(const std::string& bizTypeImport);
				bool getCiteTemplate()const;
				void setCiteTemplate(bool citeTemplate);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getIndustryInfo()const;
				void setIndustryInfo(const std::string& industryInfo);
				std::string getBizTypeName()const;
				void setBizTypeName(const std::string& bizTypeName);

            private:
				std::string description_;
				std::string bizTypeImport_;
				bool citeTemplate_;
				std::string sourceIp_;
				std::string industryInfo_;
				std::string bizTypeName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_CREATEBIZTYPEREQUEST_H_