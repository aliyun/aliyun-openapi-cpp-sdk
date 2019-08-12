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

#ifndef ALIBABACLOUD_TESLADAM_MODEL_HOSTGETSRESULT_H_
#define ALIBABACLOUD_TESLADAM_MODEL_HOSTGETSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/tesladam/TeslaDamExport.h>

namespace AlibabaCloud
{
	namespace TeslaDam
	{
		namespace Model
		{
			class ALIBABACLOUD_TESLADAM_EXPORT HostGetsResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string appCode;
					std::string clusterCode;
					int healthScoreLast;
					std::string ip;
					std::string hostname;
					std::string healthReasonLast;
					int sshStatus;
					int heartStatus;
				};


				HostGetsResult();
				explicit HostGetsResult(const std::string &payload);
				~HostGetsResult();
				bool getStatus()const;
				std::string getMessage()const;
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool status_;
				std::string message_;
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TESLADAM_MODEL_HOSTGETSRESULT_H_