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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBECDNSERVICERESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBECDNSERVICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT DescribeCdnServiceResult : public ServiceResult
			{
			public:
				struct LockReason
				{
					std::string lockReason;
				};


				DescribeCdnServiceResult();
				explicit DescribeCdnServiceResult(const std::string &payload);
				~DescribeCdnServiceResult();
				std::string getChangingChargeType()const;
				std::string getInstanceId()const;
				std::string getOpeningTime()const;
				std::vector<LockReason> getOperationLocks()const;
				std::string getChangingAffectTime()const;
				std::string getInternetChargeType()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string changingChargeType_;
				std::string instanceId_;
				std::string openingTime_;
				std::vector<LockReason> operationLocks_;
				std::string changingAffectTime_;
				std::string internetChargeType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBECDNSERVICERESULT_H_