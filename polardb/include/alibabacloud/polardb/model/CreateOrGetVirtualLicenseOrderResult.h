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

#ifndef ALIBABACLOUD_POLARDB_MODEL_CREATEORGETVIRTUALLICENSEORDERRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_CREATEORGETVIRTUALLICENSEORDERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT CreateOrGetVirtualLicenseOrderResult : public ServiceResult
			{
			public:


				CreateOrGetVirtualLicenseOrderResult();
				explicit CreateOrGetVirtualLicenseOrderResult(const std::string &payload);
				~CreateOrGetVirtualLicenseOrderResult();
				std::string getVirtualOrderId()const;
				std::string getAliyunOrderId()const;
				int getActivatedCodeCount()const;
				std::string getPackageValidity()const;
				bool getIsVirtualOrder()const;
				std::string getPackageType()const;
				std::string getGmtModified()const;
				bool getAllowEmptySystemIdentifier()const;
				std::string getGmtCreated()const;
				bool getIsVirtualOrderFrozen()const;
				std::string getPurchaseChannel()const;
				int getActivationCodeQuota()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string virtualOrderId_;
				std::string aliyunOrderId_;
				int activatedCodeCount_;
				std::string packageValidity_;
				bool isVirtualOrder_;
				std::string packageType_;
				std::string gmtModified_;
				bool allowEmptySystemIdentifier_;
				std::string gmtCreated_;
				bool isVirtualOrderFrozen_;
				std::string purchaseChannel_;
				int activationCodeQuota_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_CREATEORGETVIRTUALLICENSEORDERRESULT_H_