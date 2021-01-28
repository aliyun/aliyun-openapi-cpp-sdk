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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_SUBMITINFOREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_SUBMITINFOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT SubmitInfoRequest : public RpcServiceRequest
			{
			public:
				struct EcsDescList
				{
					std::string resourceId;
					std::string bussinessDesc;
					std::string middleWareDesc;
					std::string otherMiddleWareDesc;
					std::string bussinessType;
					std::string appType;
					std::string envType;
					std::string userId;
				};

			public:
				SubmitInfoRequest();
				~SubmitInfoRequest();

				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				long getMainUserId()const;
				void setMainUserId(long mainUserId);
				std::vector<EcsDescList> getEcsDescList()const;
				void setEcsDescList(const std::vector<EcsDescList>& ecsDescList);
				long getCallerUid()const;
				void setCallerUid(long callerUid);

            private:
				std::string requestId_;
				long mainUserId_;
				std::vector<EcsDescList> ecsDescList_;
				long callerUid_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_SUBMITINFOREQUEST_H_