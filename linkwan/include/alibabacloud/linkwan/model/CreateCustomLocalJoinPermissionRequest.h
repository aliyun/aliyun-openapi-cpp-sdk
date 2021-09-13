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

#ifndef ALIBABACLOUD_LINKWAN_MODEL_CREATECUSTOMLOCALJOINPERMISSIONREQUEST_H_
#define ALIBABACLOUD_LINKWAN_MODEL_CREATECUSTOMLOCALJOINPERMISSIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/linkwan/LinkWANExport.h>

namespace AlibabaCloud
{
	namespace LinkWAN
	{
		namespace Model
		{
			class ALIBABACLOUD_LINKWAN_EXPORT CreateCustomLocalJoinPermissionRequest : public RpcServiceRequest
			{

			public:
				CreateCustomLocalJoinPermissionRequest();
				~CreateCustomLocalJoinPermissionRequest();

				std::string getClassMode()const;
				void setClassMode(const std::string& classMode);
				long getFreqBandPlanGroupId()const;
				void setFreqBandPlanGroupId(long freqBandPlanGroupId);
				std::string getJoinEui()const;
				void setJoinEui(const std::string& joinEui);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				std::string getJoinPermissionName()const;
				void setJoinPermissionName(const std::string& joinPermissionName);

            private:
				std::string classMode_;
				long freqBandPlanGroupId_;
				std::string joinEui_;
				std::string apiProduct_;
				std::string apiRevision_;
				std::string joinPermissionName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINKWAN_MODEL_CREATECUSTOMLOCALJOINPERMISSIONREQUEST_H_