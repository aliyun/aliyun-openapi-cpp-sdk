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

#ifndef ALIBABACLOUD_VS_MODEL_CONTINUOUSMOVEREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_CONTINUOUSMOVEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT ContinuousMoveRequest : public RpcServiceRequest
			{

			public:
				ContinuousMoveRequest();
				~ContinuousMoveRequest();

				std::string getTilt()const;
				void setTilt(const std::string& tilt);
				std::string getSubProtocol()const;
				void setSubProtocol(const std::string& subProtocol);
				std::string getId()const;
				void setId(const std::string& id);
				std::string getPan()const;
				void setPan(const std::string& pan);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getZoom()const;
				void setZoom(const std::string& zoom);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string tilt_;
				std::string subProtocol_;
				std::string id_;
				std::string pan_;
				std::string showLog_;
				std::string zoom_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_CONTINUOUSMOVEREQUEST_H_