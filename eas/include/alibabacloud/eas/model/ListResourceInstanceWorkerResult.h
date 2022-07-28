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

#ifndef ALIBABACLOUD_EAS_MODEL_LISTRESOURCEINSTANCEWORKERRESULT_H_
#define ALIBABACLOUD_EAS_MODEL_LISTRESOURCEINSTANCEWORKERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eas/EasExport.h>

namespace AlibabaCloud
{
	namespace Eas
	{
		namespace Model
		{
			class ALIBABACLOUD_EAS_EXPORT ListResourceInstanceWorkerResult : public ServiceResult
			{
			public:
				struct PodsItem
				{
					std::string status;
					int memoryLimit;
					int restartCount;
					bool ready;
					int cpuLimit;
					std::string serviceName;
					std::string startTime;
					int gpuLimit;
					int gpuRequest;
					int cpuRequest;
					int memoryRquest;
					std::string name;
				};


				ListResourceInstanceWorkerResult();
				explicit ListResourceInstanceWorkerResult(const std::string &payload);
				~ListResourceInstanceWorkerResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<PodsItem> getPods()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<PodsItem> pods_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EAS_MODEL_LISTRESOURCEINSTANCEWORKERRESULT_H_