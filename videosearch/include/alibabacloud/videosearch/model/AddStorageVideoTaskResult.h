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

#ifndef ALIBABACLOUD_VIDEOSEARCH_MODEL_ADDSTORAGEVIDEOTASKRESULT_H_
#define ALIBABACLOUD_VIDEOSEARCH_MODEL_ADDSTORAGEVIDEOTASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/videosearch/VideosearchExport.h>

namespace AlibabaCloud
{
	namespace Videosearch
	{
		namespace Model
		{
			class ALIBABACLOUD_VIDEOSEARCH_EXPORT AddStorageVideoTaskResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string taskId;
				};


				AddStorageVideoTaskResult();
				explicit AddStorageVideoTaskResult(const std::string &payload);
				~AddStorageVideoTaskResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VIDEOSEARCH_MODEL_ADDSTORAGEVIDEOTASKRESULT_H_