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

#ifndef ALIBABACLOUD_KMS_MODEL_LISTAPPLICATIONACCESSPOINTSRESULT_H_
#define ALIBABACLOUD_KMS_MODEL_LISTAPPLICATIONACCESSPOINTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/kms/KmsExport.h>

namespace AlibabaCloud
{
	namespace Kms
	{
		namespace Model
		{
			class ALIBABACLOUD_KMS_EXPORT ListApplicationAccessPointsResult : public ServiceResult
			{
			public:
				struct ApplicationAccessPoint
				{
					std::string authenticationMethod;
					std::string name;
				};


				ListApplicationAccessPointsResult();
				explicit ListApplicationAccessPointsResult(const std::string &payload);
				~ListApplicationAccessPointsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ApplicationAccessPoint> getApplicationAccessPoints()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ApplicationAccessPoint> applicationAccessPoints_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_KMS_MODEL_LISTAPPLICATIONACCESSPOINTSRESULT_H_