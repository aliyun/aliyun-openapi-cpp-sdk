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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEESLDEVICESREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEESLDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT DescribeEslDevicesRequest : public RpcServiceRequest
			{

			public:
				DescribeEslDevicesRequest();
				~DescribeEslDevicesRequest();

				std::string getStoreId()const;
				void setStoreId(const std::string& storeId);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getMac()const;
				void setMac(const std::string& mac);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getEslBarCode()const;
				void setEslBarCode(const std::string& eslBarCode);
				std::string getVendor()const;
				void setVendor(const std::string& vendor);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getItemBarCode()const;
				void setItemBarCode(const std::string& itemBarCode);
				std::string getEslStatus()const;
				void setEslStatus(const std::string& eslStatus);
				int getToBatteryLevel()const;
				void setToBatteryLevel(int toBatteryLevel);
				int getFromBatteryLevel()const;
				void setFromBatteryLevel(int fromBatteryLevel);
				std::string getShelfCode()const;
				void setShelfCode(const std::string& shelfCode);
				bool getBeBind()const;
				void setBeBind(bool beBind);

            private:
				std::string storeId_;
				std::string type_;
				std::string mac_;
				int pageNumber_;
				std::string eslBarCode_;
				std::string vendor_;
				int pageSize_;
				std::string itemBarCode_;
				std::string eslStatus_;
				int toBatteryLevel_;
				int fromBatteryLevel_;
				std::string shelfCode_;
				bool beBind_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEESLDEVICESREQUEST_H_