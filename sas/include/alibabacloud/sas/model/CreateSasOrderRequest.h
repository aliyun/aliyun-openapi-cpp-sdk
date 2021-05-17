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

#ifndef ALIBABACLOUD_SAS_MODEL_CREATESASORDERREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_CREATESASORDERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT CreateSasOrderRequest : public RpcServiceRequest
			{

			public:
				CreateSasOrderRequest();
				~CreateSasOrderRequest();

				std::string getSasWebguardBoolean()const;
				void setSasWebguardBoolean(const std::string& sasWebguardBoolean);
				bool getAutoUseCoupon()const;
				void setAutoUseCoupon(bool autoUseCoupon);
				std::string getSpec()const;
				void setSpec(const std::string& spec);
				std::string getInstanceCount()const;
				void setInstanceCount(const std::string& instanceCount);
				std::string getSasWebguardOrderNum()const;
				void setSasWebguardOrderNum(const std::string& sasWebguardOrderNum);
				std::string getContainerImageScan()const;
				void setContainerImageScan(const std::string& containerImageScan);
				int getAutoRenewPeriod()const;
				void setAutoRenewPeriod(int autoRenewPeriod);
				int getPeriod()const;
				void setPeriod(int period);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getSasAntiRansomware()const;
				void setSasAntiRansomware(const std::string& sasAntiRansomware);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				std::string getSasSc()const;
				void setSasSc(const std::string& sasSc);
				std::string getVcore()const;
				void setVcore(const std::string& vcore);
				std::string getSasSlsStorage()const;
				void setSasSlsStorage(const std::string& sasSlsStorage);
				std::string getSasProductService()const;
				void setSasProductService(const std::string& sasProductService);

            private:
				std::string sasWebguardBoolean_;
				bool autoUseCoupon_;
				std::string spec_;
				std::string instanceCount_;
				std::string sasWebguardOrderNum_;
				std::string containerImageScan_;
				int autoRenewPeriod_;
				int period_;
				bool autoPay_;
				std::string sasAntiRansomware_;
				std::string periodUnit_;
				std::string sasSc_;
				std::string vcore_;
				std::string sasSlsStorage_;
				std::string sasProductService_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_CREATESASORDERREQUEST_H_