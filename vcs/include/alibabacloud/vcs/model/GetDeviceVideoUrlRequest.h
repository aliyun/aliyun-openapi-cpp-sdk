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

#ifndef ALIBABACLOUD_VCS_MODEL_GETDEVICEVIDEOURLREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_GETDEVICEVIDEOURLREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT GetDeviceVideoUrlRequest : public RpcServiceRequest
			{

			public:
				GetDeviceVideoUrlRequest();
				~GetDeviceVideoUrlRequest();

				std::string getOutProtocol()const;
				void setOutProtocol(const std::string& outProtocol);
				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::string getGbId()const;
				void setGbId(const std::string& gbId);
				long getEndTime()const;
				void setEndTime(long endTime);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getDeviceId()const;
				void setDeviceId(const std::string& deviceId);

            private:
				std::string outProtocol_;
				std::string corpId_;
				std::string gbId_;
				long endTime_;
				long startTime_;
				std::string deviceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_GETDEVICEVIDEOURLREQUEST_H_