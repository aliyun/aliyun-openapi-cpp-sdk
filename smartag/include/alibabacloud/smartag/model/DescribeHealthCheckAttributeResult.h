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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEHEALTHCHECKATTRIBUTERESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEHEALTHCHECKATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT DescribeHealthCheckAttributeResult : public ServiceResult
			{
			public:


				DescribeHealthCheckAttributeResult();
				explicit DescribeHealthCheckAttributeResult(const std::string &payload);
				~DescribeHealthCheckAttributeResult();
				int getSrcPort()const;
				std::string getDescription()const;
				std::string getSrcIpAddr()const;
				long getCreateTime()const;
				int getFailCountThreshold()const;
				int getDstPort()const;
				std::string getName()const;
				int getProbeCount()const;
				std::string getType()const;
				int getProbeTimeout()const;
				std::string getHcInstanceId()const;
				int getRttThreshold()const;
				int getProbeInterval()const;
				std::string getSmartAGId()const;
				int getRttFailThreshold()const;
				std::string getDstIpAddr()const;

			protected:
				void parse(const std::string &payload);
			private:
				int srcPort_;
				std::string description_;
				std::string srcIpAddr_;
				long createTime_;
				int failCountThreshold_;
				int dstPort_;
				std::string name_;
				int probeCount_;
				std::string type_;
				int probeTimeout_;
				std::string hcInstanceId_;
				int rttThreshold_;
				int probeInterval_;
				std::string smartAGId_;
				int rttFailThreshold_;
				std::string dstIpAddr_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEHEALTHCHECKATTRIBUTERESULT_H_