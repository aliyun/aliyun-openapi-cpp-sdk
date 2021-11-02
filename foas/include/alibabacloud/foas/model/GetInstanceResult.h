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

#ifndef ALIBABACLOUD_FOAS_MODEL_GETINSTANCERESULT_H_
#define ALIBABACLOUD_FOAS_MODEL_GETINSTANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/foas/FoasExport.h>

namespace AlibabaCloud
{
	namespace Foas
	{
		namespace Model
		{
			class ALIBABACLOUD_FOAS_EXPORT GetInstanceResult : public ServiceResult
			{
			public:
				struct Instance
				{
					std::string lastErrorMessage;
					std::string expectState;
					long endTime;
					std::string projectName;
					std::string jobName;
					std::string properties;
					std::string starter;
					long inputDelay;
					long lastErrorTime;
					std::string lastOperator;
					std::string packages;
					std::string apiType;
					std::string queueName;
					std::string engineVersion;
					std::string clusterId;
					int priority;
					std::string planJson;
					long startTime;
					std::string code;
					std::string actualState;
					std::string engineJobHandler;
					std::string jobType;
					std::string autoScaleParams;
					long id;
					long lastOperateTime;
				};


				GetInstanceResult();
				explicit GetInstanceResult(const std::string &payload);
				~GetInstanceResult();
				Instance getInstance()const;

			protected:
				void parse(const std::string &payload);
			private:
				Instance instance_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FOAS_MODEL_GETINSTANCERESULT_H_