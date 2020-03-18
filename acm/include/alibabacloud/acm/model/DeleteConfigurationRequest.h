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

#ifndef ALIBABACLOUD_ACM_MODEL_DELETECONFIGURATIONREQUEST_H_
#define ALIBABACLOUD_ACM_MODEL_DELETECONFIGURATIONREQUEST_H_

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
			class ALIBABACLOUD_ACM_EXPORT DeleteConfigurationRequest : public RoaServiceRequest
			{

			public:
				DeleteConfigurationRequest();
				~DeleteConfigurationRequest();

				std::string getDataId()const;
				void setDataId(const std::string& dataId);
				std::string getNamespaceId()const;
				void setNamespaceId(const std::string& namespaceId);
				std::string getGroup()const;
				void setGroup(const std::string& group);

            private:
				std::string dataId_;
				std::string namespaceId_;
				std::string group_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACM_MODEL_DELETECONFIGURATIONREQUEST_H_