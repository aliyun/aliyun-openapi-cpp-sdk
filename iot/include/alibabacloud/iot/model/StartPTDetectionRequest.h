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

#ifndef ALIBABACLOUD_IOT_MODEL_STARTPTDETECTIONREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_STARTPTDETECTIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT StartPTDetectionRequest : public RpcServiceRequest
			{

			public:
				StartPTDetectionRequest();
				~StartPTDetectionRequest();

				std::string getPowerStationUid()const;
				void setPowerStationUid(const std::string& powerStationUid);
				std::string getData()const;
				void setData(const std::string& data);
				int getPowerPlantsNumber()const;
				void setPowerPlantsNumber(int powerPlantsNumber);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getAlgorithmInstanceUid()const;
				void setAlgorithmInstanceUid(const std::string& algorithmInstanceUid);
				std::string getFileName()const;
				void setFileName(const std::string& fileName);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				long getDataCollectionTime()const;
				void setDataCollectionTime(long dataCollectionTime);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				int getSensitivity()const;
				void setSensitivity(int sensitivity);

            private:
				std::string powerStationUid_;
				std::string data_;
				int powerPlantsNumber_;
				std::string iotInstanceId_;
				std::string algorithmInstanceUid_;
				std::string fileName_;
				std::string apiProduct_;
				long dataCollectionTime_;
				std::string apiRevision_;
				int sensitivity_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_STARTPTDETECTIONREQUEST_H_