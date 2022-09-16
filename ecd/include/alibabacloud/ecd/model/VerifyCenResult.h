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

#ifndef ALIBABACLOUD_ECD_MODEL_VERIFYCENRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_VERIFYCENRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecd/EcdExport.h>

namespace AlibabaCloud
{
	namespace Ecd
	{
		namespace Model
		{
			class ALIBABACLOUD_ECD_EXPORT VerifyCenResult : public ServiceResult
			{
			public:
				struct RouteEntry
				{
					std::string status;
					std::string destinationCidrBlock;
					std::string regionId;
					std::string nextHopInstanceId;
				};


				VerifyCenResult();
				explicit VerifyCenResult(const std::string &payload);
				~VerifyCenResult();
				std::string getStatus()const;
				std::vector<std::string> getCidrBlocks()const;
				std::vector<RouteEntry> getRouteEntries()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::vector<std::string> cidrBlocks_;
				std::vector<RouteEntry> routeEntries_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_VERIFYCENRESULT_H_