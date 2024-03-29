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

#ifndef ALIBABACLOUD_VS_MODEL_CONTINUOUSADJUSTREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_CONTINUOUSADJUSTREQUEST_H_

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
			class ALIBABACLOUD_VS_EXPORT ContinuousAdjustRequest : public RpcServiceRequest
			{

			public:
				ContinuousAdjustRequest();
				~ContinuousAdjustRequest();

				std::string getFocus()const;
				void setFocus(const std::string& focus);
				std::string getSubProtocol()const;
				void setSubProtocol(const std::string& subProtocol);
				std::string getId()const;
				void setId(const std::string& id);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getIris()const;
				void setIris(const std::string& iris);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string focus_;
				std::string subProtocol_;
				std::string id_;
				std::string showLog_;
				std::string iris_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_CONTINUOUSADJUSTREQUEST_H_