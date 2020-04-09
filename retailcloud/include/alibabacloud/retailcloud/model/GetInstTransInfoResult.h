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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_GETINSTTRANSINFORESULT_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_GETINSTTRANSINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT GetInstTransInfoResult : public ServiceResult
			{
			public:


				GetInstTransInfoResult();
				explicit GetInstTransInfoResult(const std::string &payload);
				~GetInstTransInfoResult();
				long getEndTime()const;
				std::string getInstanceId()const;
				std::string getChargeType()const;
				long getStartTime()const;
				bool getIsAutoRenew()const;
				int getRenewCycle()const;

			protected:
				void parse(const std::string &payload);
			private:
				long endTime_;
				std::string instanceId_;
				std::string chargeType_;
				long startTime_;
				bool isAutoRenew_;
				int renewCycle_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_GETINSTTRANSINFORESULT_H_