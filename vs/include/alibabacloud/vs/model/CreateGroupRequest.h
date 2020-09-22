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

#ifndef ALIBABACLOUD_VS_MODEL_CREATEGROUPREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_CREATEGROUPREQUEST_H_

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
			class ALIBABACLOUD_VS_EXPORT CreateGroupRequest : public RpcServiceRequest
			{

			public:
				CreateGroupRequest();
				~CreateGroupRequest();

				int getCaptureVideo()const;
				void setCaptureVideo(int captureVideo);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getCaptureOssPath()const;
				void setCaptureOssPath(const std::string& captureOssPath);
				std::string getPushDomain()const;
				void setPushDomain(const std::string& pushDomain);
				int getCaptureImage()const;
				void setCaptureImage(int captureImage);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getApp()const;
				void setApp(const std::string& app);
				std::string getPlayDomain()const;
				void setPlayDomain(const std::string& playDomain);
				std::string getOutProtocol()const;
				void setOutProtocol(const std::string& outProtocol);
				int getCaptureInterval()const;
				void setCaptureInterval(int captureInterval);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getInProtocol()const;
				void setInProtocol(const std::string& inProtocol);
				bool getLazyPull()const;
				void setLazyPull(bool lazyPull);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getCallback()const;
				void setCallback(const std::string& callback);
				std::string getRegion()const;
				void setRegion(const std::string& region);
				std::string getCaptureOssBucket()const;
				void setCaptureOssBucket(const std::string& captureOssBucket);

            private:
				int captureVideo_;
				std::string description_;
				std::string captureOssPath_;
				std::string pushDomain_;
				int captureImage_;
				std::string showLog_;
				std::string app_;
				std::string playDomain_;
				std::string outProtocol_;
				int captureInterval_;
				long ownerId_;
				std::string inProtocol_;
				bool lazyPull_;
				std::string name_;
				std::string callback_;
				std::string region_;
				std::string captureOssBucket_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_CREATEGROUPREQUEST_H_