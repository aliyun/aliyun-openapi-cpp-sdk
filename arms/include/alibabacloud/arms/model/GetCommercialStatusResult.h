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

#ifndef ALIBABACLOUD_ARMS_MODEL_GETCOMMERCIALSTATUSRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_GETCOMMERCIALSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT GetCommercialStatusResult : public ServiceResult
			{
			public:
				struct UserAndCommodityStatus
				{
					std::string status;
					bool basic;
					long freeDays;
					std::string chargeType;
					bool enable;
					std::string lable;
					std::string extraInfo;
				};


				GetCommercialStatusResult();
				explicit GetCommercialStatusResult(const std::string &payload);
				~GetCommercialStatusResult();
				UserAndCommodityStatus getUserAndCommodityStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				UserAndCommodityStatus userAndCommodityStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_GETCOMMERCIALSTATUSRESULT_H_