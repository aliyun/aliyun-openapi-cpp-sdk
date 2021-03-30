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

#ifndef ALIBABACLOUD_AIREC_MODEL_RECOMMENDREQUEST_H_
#define ALIBABACLOUD_AIREC_MODEL_RECOMMENDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/airec/AirecExport.h>

namespace AlibabaCloud
{
	namespace Airec
	{
		namespace Model
		{
			class ALIBABACLOUD_AIREC_EXPORT RecommendRequest : public RoaServiceRequest
			{

			public:
				RecommendRequest();
				~RecommendRequest();

				int getReturnCount()const;
				void setReturnCount(int returnCount);
				std::string getServiceType()const;
				void setServiceType(const std::string& serviceType);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getDebug()const;
				void setDebug(const std::string& debug);
				std::string getIp()const;
				void setIp(const std::string& ip);
				std::string getLogLevel()const;
				void setLogLevel(const std::string& logLevel);
				std::string getSceneId()const;
				void setSceneId(const std::string& sceneId);
				std::string getImei()const;
				void setImei(const std::string& imei);
				std::string getExperimentId()const;
				void setExperimentId(const std::string& experimentId);
				std::string getUserId()const;
				void setUserId(const std::string& userId);
				std::string getItems()const;
				void setItems(const std::string& items);
				std::string getUserInfo()const;
				void setUserInfo(const std::string& userInfo);

            private:
				int returnCount_;
				std::string serviceType_;
				std::string instanceId_;
				std::string debug_;
				std::string ip_;
				std::string logLevel_;
				std::string sceneId_;
				std::string imei_;
				std::string experimentId_;
				std::string userId_;
				std::string items_;
				std::string userInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AIREC_MODEL_RECOMMENDREQUEST_H_