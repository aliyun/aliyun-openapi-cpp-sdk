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

#ifndef ALIBABACLOUD_OPENANALYTICS_MODEL_SETALLOWIPREQUEST_H_
#define ALIBABACLOUD_OPENANALYTICS_MODEL_SETALLOWIPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/openanalytics/OpenanalyticsExport.h>

namespace AlibabaCloud
{
	namespace Openanalytics
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENANALYTICS_EXPORT SetAllowIPRequest : public RpcServiceRequest
			{

			public:
				SetAllowIPRequest();
				~SetAllowIPRequest();

				std::string getRegionID()const;
				void setRegionID(const std::string& regionID);
				long getUserID()const;
				void setUserID(long userID);
				std::string getNetworkType()const;
				void setNetworkType(const std::string& networkType);
				std::string getAllowIP()const;
				void setAllowIP(const std::string& allowIP);
				bool getAppend()const;
				void setAppend(bool append);

            private:
				std::string regionID_;
				long userID_;
				std::string networkType_;
				std::string allowIP_;
				bool append_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENANALYTICS_MODEL_SETALLOWIPREQUEST_H_