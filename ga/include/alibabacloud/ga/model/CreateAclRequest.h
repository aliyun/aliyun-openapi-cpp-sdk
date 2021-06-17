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

#ifndef ALIBABACLOUD_GA_MODEL_CREATEACLREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_CREATEACLREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT CreateAclRequest : public RpcServiceRequest
			{
			public:
				struct AclEntries
				{
					std::string entry;
					std::string entryDescription;
				};

			public:
				CreateAclRequest();
				~CreateAclRequest();

				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getAclName()const;
				void setAclName(const std::string& aclName);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::vector<AclEntries> getAclEntries()const;
				void setAclEntries(const std::vector<AclEntries>& aclEntries);
				std::string getAddressIPVersion()const;
				void setAddressIPVersion(const std::string& addressIPVersion);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);

            private:
				bool dryRun_;
				std::string aclName_;
				std::string clientToken_;
				std::vector<AclEntries> aclEntries_;
				std::string addressIPVersion_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_CREATEACLREQUEST_H_