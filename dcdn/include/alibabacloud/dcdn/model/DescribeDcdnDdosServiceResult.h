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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDDOSSERVICERESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDDOSSERVICERESULT_H_

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
			class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnDdosServiceResult : public ServiceResult
			{
			public:


				DescribeDcdnDdosServiceResult();
				explicit DescribeDcdnDdosServiceResult(const std::string &payload);
				~DescribeDcdnDdosServiceResult();
				std::string getStatus()const;
				std::string getChangingEdition()const;
				std::string getInstanceId()const;
				std::string getOpeningTime()const;
				std::string getEnabled()const;
				std::string getEndingTime()const;
				std::string getChangingAffectTime()const;
				std::string getEdition()const;
				int getChangingProtectNum()const;
				std::string getChangingChargeType()const;
				int getProtectNum()const;
				std::string getChargeType()const;
				int getDomianNum()const;
				int getChangingDomianNum()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string changingEdition_;
				std::string instanceId_;
				std::string openingTime_;
				std::string enabled_;
				std::string endingTime_;
				std::string changingAffectTime_;
				std::string edition_;
				int changingProtectNum_;
				std::string changingChargeType_;
				int protectNum_;
				std::string chargeType_;
				int domianNum_;
				int changingDomianNum_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDDOSSERVICERESULT_H_