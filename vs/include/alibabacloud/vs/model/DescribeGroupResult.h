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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBEGROUPRESULT_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBEGROUPRESULT_H_

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
			class ALIBABACLOUD_VS_EXPORT DescribeGroupResult : public ServiceResult
			{
			public:
				struct Stats
				{
					long ipcNum;
					long iedNum;
					long deviceNum;
					long platformNum;
				};


				DescribeGroupResult();
				explicit DescribeGroupResult(const std::string &payload);
				~DescribeGroupResult();
				std::string getApp()const;
				std::string getInProtocol()const;
				std::string getDescription()const;
				std::string getCreatedTime()const;
				std::string getName()const;
				std::vector<std::string> getGbUdpPorts()const;
				int getCaptureInterval()const;
				std::string getGbId()const;
				std::string getPushDomain()const;
				std::string getAliasId()const;
				int getCaptureImage()const;
				std::string getStatus()const;
				std::string getCaptureOssPath()const;
				std::string getGbIp()const;
				bool getEnabled()const;
				std::string getOutProtocol()const;
				bool getLazyPull()const;
				long getGbPort()const;
				std::string getCallback()const;
				int getCaptureVideo()const;
				std::string getPlayDomain()const;
				Stats getStats()const;
				std::string getRegion()const;
				std::string getCaptureOssBucket()const;
				std::vector<std::string> getGbTcpPorts()const;
				std::string getId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string app_;
				std::string inProtocol_;
				std::string description_;
				std::string createdTime_;
				std::string name_;
				std::vector<std::string> gbUdpPorts_;
				int captureInterval_;
				std::string gbId_;
				std::string pushDomain_;
				std::string aliasId_;
				int captureImage_;
				std::string status_;
				std::string captureOssPath_;
				std::string gbIp_;
				bool enabled_;
				std::string outProtocol_;
				bool lazyPull_;
				long gbPort_;
				std::string callback_;
				int captureVideo_;
				std::string playDomain_;
				Stats stats_;
				std::string region_;
				std::string captureOssBucket_;
				std::vector<std::string> gbTcpPorts_;
				std::string id_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBEGROUPRESULT_H_