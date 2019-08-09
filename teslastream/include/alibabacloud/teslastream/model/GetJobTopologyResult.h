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

#ifndef ALIBABACLOUD_TESLASTREAM_MODEL_GETJOBTOPOLOGYRESULT_H_
#define ALIBABACLOUD_TESLASTREAM_MODEL_GETJOBTOPOLOGYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/teslastream/TeslaStreamExport.h>

namespace AlibabaCloud
{
	namespace TeslaStream
	{
		namespace Model
		{
			class ALIBABACLOUD_TESLASTREAM_EXPORT GetJobTopologyResult : public ServiceResult
			{
			public:
				struct Job
				{
					std::string pluginRelation;
					std::string type;
					std::vector<std::string> parents;
					std::vector<std::string> childrens;
					std::string text;
				};


				GetJobTopologyResult();
				explicit GetJobTopologyResult(const std::string &payload);
				~GetJobTopologyResult();
				std::string getMessage()const;
				std::vector<Job> getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<Job> data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TESLASTREAM_MODEL_GETJOBTOPOLOGYRESULT_H_