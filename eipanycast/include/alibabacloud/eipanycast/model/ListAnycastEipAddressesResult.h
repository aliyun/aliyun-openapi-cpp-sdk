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

#ifndef ALIBABACLOUD_EIPANYCAST_MODEL_LISTANYCASTEIPADDRESSESRESULT_H_
#define ALIBABACLOUD_EIPANYCAST_MODEL_LISTANYCASTEIPADDRESSESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eipanycast/EipanycastExport.h>

namespace AlibabaCloud
{
	namespace Eipanycast
	{
		namespace Model
		{
			class ALIBABACLOUD_EIPANYCAST_EXPORT ListAnycastEipAddressesResult : public ServiceResult
			{
			public:
				struct Anycast
				{
					struct AnycastEipBindInfo
					{
						std::string bindInstanceId;
						std::string bindTime;
						std::string bindInstanceType;
						std::string bindInstanceRegionId;
					};
					std::string status;
					std::string description;
					std::string instanceChargeType;
					std::string createTime;
					std::vector<Anycast::AnycastEipBindInfo> anycastEipBindInfoList;
					std::string businessStatus;
					std::string internetChargeType;
					std::string name;
					std::string anycastId;
					std::string serviceLocation;
					int bandwidth;
					std::string ipAddress;
					std::string bid;
					long aliUid;
				};


				ListAnycastEipAddressesResult();
				explicit ListAnycastEipAddressesResult(const std::string &payload);
				~ListAnycastEipAddressesResult();
				int getTotalCount()const;
				std::vector<Anycast> getAnycastList()const;
				std::string getNextToken()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<Anycast> anycastList_;
				std::string nextToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIPANYCAST_MODEL_LISTANYCASTEIPADDRESSESRESULT_H_