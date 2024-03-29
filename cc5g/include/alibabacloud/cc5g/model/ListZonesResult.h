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

#ifndef ALIBABACLOUD_CC5G_MODEL_LISTZONESRESULT_H_
#define ALIBABACLOUD_CC5G_MODEL_LISTZONESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cc5g/CC5GExport.h>

namespace AlibabaCloud
{
	namespace CC5G
	{
		namespace Model
		{
			class ALIBABACLOUD_CC5G_EXPORT ListZonesResult : public ServiceResult
			{
			public:
				struct Zone
				{
					std::string zoneId;
					std::string localName;
				};


				ListZonesResult();
				explicit ListZonesResult(const std::string &payload);
				~ListZonesResult();
				std::vector<Zone> getZones()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Zone> zones_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CC5G_MODEL_LISTZONESRESULT_H_