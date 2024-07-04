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

#ifndef ALIBABACLOUD_NIS_MODEL_GETNISNETWORKRANKINGRESULT_H_
#define ALIBABACLOUD_NIS_MODEL_GETNISNETWORKRANKINGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nis/NisExport.h>

namespace AlibabaCloud
{
	namespace Nis
	{
		namespace Model
		{
			class ALIBABACLOUD_NIS_EXPORT GetNisNetworkRankingResult : public ServiceResult
			{
			public:
				struct Rankings
				{
					std::string regionNo;
					std::string destinationIsp;
					double activeSessionCount;
					std::string destinationRegionNo;
					std::string vbrId;
					double packetCount;
					std::string sourcePort;
					std::string destinationPort;
					double outPps;
					std::string destinationIp;
					std::string sourceZone;
					double rTT;
					double inBps;
					std::string bandwidthPackageId;
					double inPps;
					std::string protocol;
					std::string asn;
					double outBps;
					double byteCount;
					std::string instanceId;
					std::string isp;
					std::string iP;
					double newSessionPerSecond;
					std::string city;
					std::string province;
					std::string attachmentId;
					double retransmitRate;
					std::string sourceIp;
					std::string country;
					std::string destinationZone;
					std::string sourceIsp;
				};


				GetNisNetworkRankingResult();
				explicit GetNisNetworkRankingResult(const std::string &payload);
				~GetNisNetworkRankingResult();
				std::vector<Rankings> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Rankings> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NIS_MODEL_GETNISNETWORKRANKINGRESULT_H_