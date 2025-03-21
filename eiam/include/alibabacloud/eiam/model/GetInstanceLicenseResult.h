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

#ifndef ALIBABACLOUD_EIAM_MODEL_GETINSTANCELICENSERESULT_H_
#define ALIBABACLOUD_EIAM_MODEL_GETINSTANCELICENSERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eiam/EiamExport.h>

namespace AlibabaCloud
{
	namespace Eiam
	{
		namespace Model
		{
			class ALIBABACLOUD_EIAM_EXPORT GetInstanceLicenseResult : public ServiceResult
			{
			public:
				struct License
				{
					long endTime;
					std::string licenseConfigJson;
					long licenseCreateTime;
					std::string purchaseInstanceId;
					std::string licenseChargeType;
					std::string licenseStatus;
					long userQuota;
					long startTime;
					std::string purchaseChannel;
					std::string licenseId;
					std::string edition;
				};


				GetInstanceLicenseResult();
				explicit GetInstanceLicenseResult(const std::string &payload);
				~GetInstanceLicenseResult();
				License getLicense()const;

			protected:
				void parse(const std::string &payload);
			private:
				License license_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIAM_MODEL_GETINSTANCELICENSERESULT_H_