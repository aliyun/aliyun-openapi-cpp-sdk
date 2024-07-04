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

#ifndef ALIBABACLOUD_NIS_MODEL_GETINTERNETTUPLERESULT_H_
#define ALIBABACLOUD_NIS_MODEL_GETINTERNETTUPLERESULT_H_

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
			class ALIBABACLOUD_NIS_EXPORT GetInternetTupleResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string cloudIp;
					double inRetranCount;
					double outPacketCount;
					std::string otherProvince;
					std::string beginTime;
					std::string otherProduct;
					double packetCount;
					double inByteCount;
					std::string direction;
					std::string cloudProduct;
					std::string otherIp;
					double rtt;
					std::string cloudProvince;
					std::string otherCity;
					std::string otherCountry;
					double outByteCount;
					std::string protocol;
					std::string cloudCountry;
					double inPacketCount;
					std::string cloudCity;
					double byteCount;
					std::string instanceId;
					std::string otherPort;
					double outOutOrderCount;
					double retranCount;
					double outRetranCount;
					std::string cloudIsp;
					std::string accessRegion;
					double retransmitRate;
					double inOutOrderCount;
					double outOrderCount;
					std::string otherIsp;
					std::string cloudPort;
				};


				GetInternetTupleResult();
				explicit GetInternetTupleResult(const std::string &payload);
				~GetInternetTupleResult();
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NIS_MODEL_GETINTERNETTUPLERESULT_H_