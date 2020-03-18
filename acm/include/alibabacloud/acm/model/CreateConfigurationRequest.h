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

#ifndef ALIBABACLOUD_ACM_MODEL_CREATECONFIGURATIONREQUEST_H_
#define ALIBABACLOUD_ACM_MODEL_CREATECONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/acm/AcmExport.h>

namespace AlibabaCloud
{
	namespace Acm
	{
		namespace Model
		{
			class ALIBABACLOUD_ACM_EXPORT CreateConfigurationRequest : public RoaServiceRequest
			{

			public:
				CreateConfigurationRequest();
				~CreateConfigurationRequest();

				std::string getDataId()const;
				void setDataId(const std::string& dataId);
				std::string getAppName()const;
				void setAppName(const std::string& appName);
				std::string getNamespaceId()const;
				void setNamespaceId(const std::string& namespaceId);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getContent()const;
				void setContent(const std::string& content);
				std::string getGroup()const;
				void setGroup(const std::string& group);
				std::string getDesc()const;
				void setDesc(const std::string& desc);
				std::string getTags()const;
				void setTags(const std::string& tags);

            private:
				std::string dataId_;
				std::string appName_;
				std::string namespaceId_;
				std::string type_;
				std::string content_;
				std::string group_;
				std::string desc_;
				std::string tags_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACM_MODEL_CREATECONFIGURATIONREQUEST_H_