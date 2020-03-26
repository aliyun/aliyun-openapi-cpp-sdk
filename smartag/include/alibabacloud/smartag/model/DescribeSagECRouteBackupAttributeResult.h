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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESAGECROUTEBACKUPATTRIBUTERESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESAGECROUTEBACKUPATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT DescribeSagECRouteBackupAttributeResult : public ServiceResult
			{
			public:
				struct Cidr
				{
					bool enableBackup;
					std::string cidr;
				};


				DescribeSagECRouteBackupAttributeResult();
				explicit DescribeSagECRouteBackupAttributeResult(const std::string &payload);
				~DescribeSagECRouteBackupAttributeResult();
				std::string getHcIp()const;
				std::string getStatus()const;
				std::string getExpressConnectionInterface()const;
				bool getRouteBackup()const;
				std::string getExpressConnectionNexthop()const;
				std::string getSagId()const;
				std::vector<Cidr> getCidrs()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string hcIp_;
				std::string status_;
				std::string expressConnectionInterface_;
				bool routeBackup_;
				std::string expressConnectionNexthop_;
				std::string sagId_;
				std::vector<Cidr> cidrs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESAGECROUTEBACKUPATTRIBUTERESULT_H_