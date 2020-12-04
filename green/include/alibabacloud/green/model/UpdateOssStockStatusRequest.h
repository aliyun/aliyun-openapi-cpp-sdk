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

#ifndef ALIBABACLOUD_GREEN_MODEL_UPDATEOSSSTOCKSTATUSREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_UPDATEOSSSTOCKSTATUSREQUEST_H_

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
			class ALIBABACLOUD_GREEN_EXPORT UpdateOssStockStatusRequest : public RpcServiceRequest
			{

			public:
				UpdateOssStockStatusRequest();
				~UpdateOssStockStatusRequest();

				std::string getResourceTypeList()const;
				void setResourceTypeList(const std::string& resourceTypeList);
				int getVideoFrameInterval()const;
				void setVideoFrameInterval(int videoFrameInterval);
				std::string getStartDate()const;
				void setStartDate(const std::string& startDate);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getVideoAutoFreezeSceneList()const;
				void setVideoAutoFreezeSceneList(const std::string& videoAutoFreezeSceneList);
				int getAudioMaxSize()const;
				void setAudioMaxSize(int audioMaxSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getImageAutoFreeze()const;
				void setImageAutoFreeze(const std::string& imageAutoFreeze);
				std::string getAudioAutoFreezeSceneList()const;
				void setAudioAutoFreezeSceneList(const std::string& audioAutoFreezeSceneList);
				int getVideoMaxSize()const;
				void setVideoMaxSize(int videoMaxSize);
				std::string getAutoFreezeType()const;
				void setAutoFreezeType(const std::string& autoFreezeType);
				std::string getEndDate()const;
				void setEndDate(const std::string& endDate);
				std::string getBucketConfigList()const;
				void setBucketConfigList(const std::string& bucketConfigList);
				std::string getSceneList()const;
				void setSceneList(const std::string& sceneList);
				int getVideoMaxFrames()const;
				void setVideoMaxFrames(int videoMaxFrames);
				std::string getOperation()const;
				void setOperation(const std::string& operation);

            private:
				std::string resourceTypeList_;
				int videoFrameInterval_;
				std::string startDate_;
				std::string sourceIp_;
				std::string videoAutoFreezeSceneList_;
				int audioMaxSize_;
				std::string lang_;
				std::string imageAutoFreeze_;
				std::string audioAutoFreezeSceneList_;
				int videoMaxSize_;
				std::string autoFreezeType_;
				std::string endDate_;
				std::string bucketConfigList_;
				std::string sceneList_;
				int videoMaxFrames_;
				std::string operation_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_UPDATEOSSSTOCKSTATUSREQUEST_H_