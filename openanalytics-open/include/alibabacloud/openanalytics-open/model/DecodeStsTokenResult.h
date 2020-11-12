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

#ifndef ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_DECODESTSTOKENRESULT_H_
#define ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_DECODESTSTOKENRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/openanalytics-open/Openanalytics_openExport.h>

namespace AlibabaCloud
{
	namespace Openanalytics_open
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENANALYTICS_OPEN_EXPORT DecodeStsTokenResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string policy;
					bool mfaAuthenticated;
					long expireDate;
					long accountUid;
					std::string akProxy;
					std::string tokenPrincipalName;
					long roleId;
					std::string roleName;
					std::string tokenType;
					long grantorId;
					std::string playerUid;
					std::string tokenPrincipalId;
					bool proxyTrustTransportInfo;
					long accountBid;
				};


				DecodeStsTokenResult();
				explicit DecodeStsTokenResult(const std::string &payload);
				~DecodeStsTokenResult();
				Data getData()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_DECODESTSTOKENRESULT_H_