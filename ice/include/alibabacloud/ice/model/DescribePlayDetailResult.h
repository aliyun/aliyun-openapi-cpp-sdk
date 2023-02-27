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

#ifndef ALIBABACLOUD_ICE_MODEL_DESCRIBEPLAYDETAILRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_DESCRIBEPLAYDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ice/ICEExport.h>

namespace AlibabaCloud
{
	namespace ICE
	{
		namespace Model
		{
			class ALIBABACLOUD_ICE_EXPORT DescribePlayDetailResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string status;
					std::string os;
					std::string bps;
					std::string networkDuration;
					std::string broadcastPace;
					std::string sdkVersion;
					std::string definition;
					std::string fps;
					std::string decodeStuckTime;
					std::string moov;
					std::string clientIP;
					std::string mdat;
					std::string appName;
					std::string playTs;
					std::string codec;
					std::string terminalType;
					std::string playerLoadDuration;
					std::string playerPreDealDuration;
					std::string isHardDecode;
					std::string network;
					std::string networkStuckTime;
					std::string playerReadyDuration;
					std::string sessionId;
					std::string firstFrameDuration;
				};


				DescribePlayDetailResult();
				explicit DescribePlayDetailResult(const std::string &payload);
				~DescribePlayDetailResult();
				std::vector<Data> getBaseInfos()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Data> baseInfos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_DESCRIBEPLAYDETAILRESULT_H_