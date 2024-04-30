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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNSERVICERESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNSERVICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dcdn/DcdnExport.h>

namespace AlibabaCloud
{
	namespace Dcdn
	{
		namespace Model
		{
			class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnServiceResult : public ServiceResult
			{
			public:
				struct LockReason
				{
					std::string lockReason;
				};


				DescribeDcdnServiceResult();
				explicit DescribeDcdnServiceResult(const std::string &payload);
				~DescribeDcdnServiceResult();
				std::string getWebsocketChangingType()const;
				std::string getChangingChargeType()const;
				std::string getInstanceId()const;
				std::string getWebsocketType()const;
				std::string getOpeningTime()const;
				std::vector<LockReason> getOperationLocks()const;
				std::string getChangingAffectTime()const;
				std::string getWebsocketChangingTime()const;
				std::string getInternetChargeType()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string websocketChangingType_;
				std::string changingChargeType_;
				std::string instanceId_;
				std::string websocketType_;
				std::string openingTime_;
				std::vector<LockReason> operationLocks_;
				std::string changingAffectTime_;
				std::string websocketChangingTime_;
				std::string internetChargeType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNSERVICERESULT_H_