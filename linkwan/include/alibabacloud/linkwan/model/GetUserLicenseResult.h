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

#ifndef ALIBABACLOUD_LINKWAN_MODEL_GETUSERLICENSERESULT_H_
#define ALIBABACLOUD_LINKWAN_MODEL_GETUSERLICENSERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/linkwan/LinkWANExport.h>

namespace AlibabaCloud
{
	namespace LinkWAN
	{
		namespace Model
		{
			class ALIBABACLOUD_LINKWAN_EXPORT GetUserLicenseResult : public ServiceResult
			{
			public:
				struct Data
				{
					long roamingJoinPermissionLimit;
					long gatewayLimit;
					long gatewayTupleStandardLimit;
					long gatewayTupleLimit;
					long gatewayTupleCount;
					long gatewayTupleSingleChannelLimit;
					long gatewayTupleSingleChannelCount;
					long gatewayProfessionalCount;
					long localJoinPermissionCount;
					long nodeTupleFreeLimit;
					long roamingJoinPermissionCount;
					long gatewayPrePayCount;
					long gatewayTupleHybridCount;
					long nodeTupleLimit;
					long gatewayDingTalkCount;
					long relayLimit;
					long gatewayTupleFreeLimit;
					long nodeTupleRelayLimit;
					long nodeLimit;
					long nodeTupleStandardCount;
					long nodeFreeLimit;
					std::string oui;
					long gatewayTupleHybridLimit;
					long nodeCount;
					long nodeTupleRelayCount;
					long nodeTupleCount;
					long gatewayFreeLimit;
					long roamingJoinPermissionFreeLimit;
					long gatewayCount;
					long gatewayTupleStandardCount;
					long gatewayProfessionalLimit;
					long nodeTupleStandardLimit;
					long localJoinPermissionLimit;
					long localJoinPermissionFreeLimit;
					long gatewayDingTalkLimit;
					long relayCount;
				};


				GetUserLicenseResult();
				explicit GetUserLicenseResult(const std::string &payload);
				~GetUserLicenseResult();
				Data getData()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINKWAN_MODEL_GETUSERLICENSERESULT_H_