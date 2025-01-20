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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBELICENSEORDERDETAILSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBELICENSEORDERDETAILSRESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeLicenseOrderDetailsResult : public ServiceResult
			{
			public:


				DescribeLicenseOrderDetailsResult();
				explicit DescribeLicenseOrderDetailsResult(const std::string &payload);
				~DescribeLicenseOrderDetailsResult();
				std::string getVirtualOrderId()const;
				int getActivatedCodeCount()const;
				std::string getPackageValidity()const;
				bool getIsVirtualOrder()const;
				std::string getGmtModified()const;
				std::string getGmtCreated()const;
				bool getIsVirtualOrderFrozen()const;
				std::string getPurchaseChannel()const;
				int getActivationCodeQuota()const;
				std::string getAliyunOrderId()const;
				std::string getPackageType()const;
				bool getAllowEmptySystemIdentifier()const;
				std::string getEngine()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string virtualOrderId_;
				int activatedCodeCount_;
				std::string packageValidity_;
				bool isVirtualOrder_;
				std::string gmtModified_;
				std::string gmtCreated_;
				bool isVirtualOrderFrozen_;
				std::string purchaseChannel_;
				int activationCodeQuota_;
				std::string aliyunOrderId_;
				std::string packageType_;
				bool allowEmptySystemIdentifier_;
				std::string engine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBELICENSEORDERDETAILSRESULT_H_