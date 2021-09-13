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

#ifndef ALIBABACLOUD_LINKWAN_MODEL_UPDATEGATEWAYREQUEST_H_
#define ALIBABACLOUD_LINKWAN_MODEL_UPDATEGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/linkwan/LinkWANExport.h>

namespace AlibabaCloud
{
	namespace LinkWAN
	{
		namespace Model
		{
			class ALIBABACLOUD_LINKWAN_EXPORT UpdateGatewayRequest : public RpcServiceRequest
			{

			public:
				UpdateGatewayRequest();
				~UpdateGatewayRequest();

				std::string getCity()const;
				void setCity(const std::string& city);
				float getLatitude()const;
				void setLatitude(float latitude);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getAddressCode()const;
				void setAddressCode(long addressCode);
				std::string getGisCoordinateSystem()const;
				void setGisCoordinateSystem(const std::string& gisCoordinateSystem);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				float getLongitude()const;
				void setLongitude(float longitude);
				std::string getAddress()const;
				void setAddress(const std::string& address);
				std::string getGwEui()const;
				void setGwEui(const std::string& gwEui);
				long getFreqBandPlanGroupId()const;
				void setFreqBandPlanGroupId(long freqBandPlanGroupId);
				std::string getDistrict()const;
				void setDistrict(const std::string& district);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				std::string getCommunicationMode()const;
				void setCommunicationMode(const std::string& communicationMode);

            private:
				std::string city_;
				float latitude_;
				std::string description_;
				long addressCode_;
				std::string gisCoordinateSystem_;
				std::string iotInstanceId_;
				float longitude_;
				std::string address_;
				std::string gwEui_;
				long freqBandPlanGroupId_;
				std::string district_;
				std::string apiProduct_;
				std::string name_;
				std::string apiRevision_;
				std::string communicationMode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINKWAN_MODEL_UPDATEGATEWAYREQUEST_H_