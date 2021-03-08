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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEBUSINESSREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEBUSINESSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT UpdateBusinessRequest : public RpcServiceRequest
			{

			public:
				UpdateBusinessRequest();
				~UpdateBusinessRequest();

				std::string getOwner()const;
				void setOwner(const std::string& owner);
				long getBusinessId()const;
				void setBusinessId(long businessId);
				std::string getBusinessName()const;
				void setBusinessName(const std::string& businessName);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getProjectId()const;
				void setProjectId(long projectId);
				std::string getProjectIdentifier()const;
				void setProjectIdentifier(const std::string& projectIdentifier);

            private:
				std::string owner_;
				long businessId_;
				std::string businessName_;
				std::string description_;
				long projectId_;
				std::string projectIdentifier_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEBUSINESSREQUEST_H_