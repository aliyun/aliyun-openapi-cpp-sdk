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

#ifndef ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERAVAILABLERESOURCERESULT_H_
#define ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERAVAILABLERESOURCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cbn/CbnExport.h>

namespace AlibabaCloud
{
	namespace Cbn
	{
		namespace Model
		{
			class ALIBABACLOUD_CBN_EXPORT ListTransitRouterAvailableResourceResult : public ServiceResult
			{
			public:


				ListTransitRouterAvailableResourceResult();
				explicit ListTransitRouterAvailableResourceResult(const std::string &payload);
				~ListTransitRouterAvailableResourceResult();
				std::vector<std::string> getSlaveZones()const;
				bool getSupportMulticast()const;
				std::vector<std::string> getMasterZones()const;
				std::vector<std::string> getAvailableZones()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> slaveZones_;
				bool supportMulticast_;
				std::vector<std::string> masterZones_;
				std::vector<std::string> availableZones_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERAVAILABLERESOURCERESULT_H_