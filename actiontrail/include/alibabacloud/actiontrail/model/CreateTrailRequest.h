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

#ifndef ALIBABACLOUD_ACTIONTRAIL_MODEL_CREATETRAILREQUEST_H_
#define ALIBABACLOUD_ACTIONTRAIL_MODEL_CREATETRAILREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/actiontrail/ActiontrailExport.h>

namespace AlibabaCloud
{
	namespace Actiontrail
	{
		namespace Model
		{
			class ALIBABACLOUD_ACTIONTRAIL_EXPORT CreateTrailRequest : public RpcServiceRequest
			{

			public:
				CreateTrailRequest();
				~CreateTrailRequest();

				std::string getSlsProjectArn()const;
				void setSlsProjectArn(const std::string& slsProjectArn);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSlsWriteRoleArn()const;
				void setSlsWriteRoleArn(const std::string& slsWriteRoleArn);
				bool getIsOrganizationTrail()const;
				void setIsOrganizationTrail(bool isOrganizationTrail);
				std::string getOssKeyPrefix()const;
				void setOssKeyPrefix(const std::string& ossKeyPrefix);
				std::string getMnsTopicArn()const;
				void setMnsTopicArn(const std::string& mnsTopicArn);
				std::string getRoleName()const;
				void setRoleName(const std::string& roleName);
				std::string getEventRW()const;
				void setEventRW(const std::string& eventRW);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getOssBucketName()const;
				void setOssBucketName(const std::string& ossBucketName);
				std::string getTrailRegion()const;
				void setTrailRegion(const std::string& trailRegion);

            private:
				std::string slsProjectArn_;
				std::string accessKeyId_;
				std::string slsWriteRoleArn_;
				bool isOrganizationTrail_;
				std::string ossKeyPrefix_;
				std::string mnsTopicArn_;
				std::string roleName_;
				std::string eventRW_;
				std::string name_;
				std::string ossBucketName_;
				std::string trailRegion_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACTIONTRAIL_MODEL_CREATETRAILREQUEST_H_