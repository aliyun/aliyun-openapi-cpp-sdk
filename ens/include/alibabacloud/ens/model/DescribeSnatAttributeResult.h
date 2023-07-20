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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBESNATATTRIBUTERESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBESNATATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeSnatAttributeResult : public ServiceResult
			{
			public:
				struct Snatip
				{
					std::string status;
					std::string ip;
					std::string creationTime;
				};


				DescribeSnatAttributeResult();
				explicit DescribeSnatAttributeResult(const std::string &payload);
				~DescribeSnatAttributeResult();
				std::string getStatus()const;
				std::string getSnatEntryName()const;
				std::string getSourceCIDR()const;
				std::string getCreationTime()const;
				std::vector<Snatip> getSnatIps()const;
				std::string getSnatEntryId()const;
				std::string getSnatIp()const;
				std::string getStandbyStatus()const;
				std::string getNatGatewayId()const;
				std::string getStandbySnatIp()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string snatEntryName_;
				std::string sourceCIDR_;
				std::string creationTime_;
				std::vector<Snatip> snatIps_;
				std::string snatEntryId_;
				std::string snatIp_;
				std::string standbyStatus_;
				std::string natGatewayId_;
				std::string standbySnatIp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBESNATATTRIBUTERESULT_H_