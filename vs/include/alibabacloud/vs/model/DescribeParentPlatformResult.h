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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBEPARENTPLATFORMRESULT_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBEPARENTPLATFORMRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT DescribeParentPlatformResult : public ServiceResult
			{
			public:


				DescribeParentPlatformResult();
				explicit DescribeParentPlatformResult(const std::string &payload);
				~DescribeParentPlatformResult();
				std::string getStatus()const;
				std::string getClientGbId()const;
				std::string getDescription()const;
				std::string getCreatedTime()const;
				std::string getIp()const;
				long getPort()const;
				long getClientPort()const;
				bool getClientAuth()const;
				std::string getClientIp()const;
				std::string getName()const;
				std::string getGbId()const;
				std::string getClientPassword()const;
				std::string getId()const;
				std::string getProtocol()const;
				bool getAutoStart()const;
				std::string getClientUsername()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string clientGbId_;
				std::string description_;
				std::string createdTime_;
				std::string ip_;
				long port_;
				long clientPort_;
				bool clientAuth_;
				std::string clientIp_;
				std::string name_;
				std::string gbId_;
				std::string clientPassword_;
				std::string id_;
				std::string protocol_;
				bool autoStart_;
				std::string clientUsername_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBEPARENTPLATFORMRESULT_H_