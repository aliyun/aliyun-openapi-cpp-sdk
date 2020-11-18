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

#ifndef ALIBABACLOUD_GREEN_MODEL_UPDATEOSSINCREMENTCHECKSETTINGREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_UPDATEOSSINCREMENTCHECKSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT UpdateOssIncrementCheckSettingRequest : public RpcServiceRequest
			{

			public:
				UpdateOssIncrementCheckSettingRequest();
				~UpdateOssIncrementCheckSettingRequest();

				std::string getVideoSceneList()const;
				void setVideoSceneList(const std::string& videoSceneList);
				std::string getImageSceneList()const;
				void setImageSceneList(const std::string& imageSceneList);
				int getVideoFrameInterval()const;
				void setVideoFrameInterval(int videoFrameInterval);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getCallbackId()const;
				void setCallbackId(const std::string& callbackId);
				std::string getImageScanLimit()const;
				void setImageScanLimit(const std::string& imageScanLimit);
				std::string getVideoAutoFreezeSceneList()const;
				void setVideoAutoFreezeSceneList(const std::string& videoAutoFreezeSceneList);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getImageAutoFreeze()const;
				void setImageAutoFreeze(const std::string& imageAutoFreeze);
				int getVideoMaxSize()const;
				void setVideoMaxSize(int videoMaxSize);
				std::string getAutoFreezeType()const;
				void setAutoFreezeType(const std::string& autoFreezeType);
				std::string getBucketConfigList()const;
				void setBucketConfigList(const std::string& bucketConfigList);
				int getVideoMaxFrames()const;
				void setVideoMaxFrames(int videoMaxFrames);

            private:
				std::string videoSceneList_;
				std::string imageSceneList_;
				int videoFrameInterval_;
				std::string sourceIp_;
				std::string callbackId_;
				std::string imageScanLimit_;
				std::string videoAutoFreezeSceneList_;
				std::string lang_;
				std::string imageAutoFreeze_;
				int videoMaxSize_;
				std::string autoFreezeType_;
				std::string bucketConfigList_;
				int videoMaxFrames_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_UPDATEOSSINCREMENTCHECKSETTINGREQUEST_H_