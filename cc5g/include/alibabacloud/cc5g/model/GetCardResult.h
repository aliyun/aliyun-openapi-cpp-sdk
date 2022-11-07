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

#ifndef ALIBABACLOUD_CC5G_MODEL_GETCARDRESULT_H_
#define ALIBABACLOUD_CC5G_MODEL_GETCARDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cc5g/CC5GExport.h>

namespace AlibabaCloud
{
	namespace CC5G
	{
		namespace Model
		{
			class ALIBABACLOUD_CC5G_EXPORT GetCardResult : public ServiceResult
			{
			public:


				GetCardResult();
				explicit GetCardResult(const std::string &payload);
				~GetCardResult();
				std::string getStatus()const;
				long getUsageDataTotal()const;
				std::string getDescription()const;
				int getUsageDataMonth()const;
				std::string getISP()const;
				std::string getImei()const;
				std::string getSimStatus()const;
				std::string getOrderId()const;
				long getAlarmThreshold()const;
				std::string getLock()const;
				std::string getName()const;
				long getStopThreshold()const;
				std::string getMsisdn()const;
				long getLimitThreshold()const;
				std::string getWirelessCloudConnectorId()const;
				std::string getActivatedTime()const;
				std::string getCloudConnectorId()const;
				std::string getIccid()const;
				std::string getImsi()const;
				std::string getIpAddress()const;
				std::string getSpec()const;
				std::string getNetType()const;
				std::string getAPN()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				long usageDataTotal_;
				std::string description_;
				int usageDataMonth_;
				std::string iSP_;
				std::string imei_;
				std::string simStatus_;
				std::string orderId_;
				long alarmThreshold_;
				std::string lock_;
				std::string name_;
				long stopThreshold_;
				std::string msisdn_;
				long limitThreshold_;
				std::string wirelessCloudConnectorId_;
				std::string activatedTime_;
				std::string cloudConnectorId_;
				std::string iccid_;
				std::string imsi_;
				std::string ipAddress_;
				std::string spec_;
				std::string netType_;
				std::string aPN_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CC5G_MODEL_GETCARDRESULT_H_