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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_CREATEQOSPOLICYRESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_CREATEQOSPOLICYRESULT_H_

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
			class ALIBABACLOUD_SMARTAG_EXPORT CreateQosPolicyResult : public ServiceResult
			{
			public:


				CreateQosPolicyResult();
				explicit CreateQosPolicyResult(const std::string &payload);
				~CreateQosPolicyResult();
				std::string getDescription()const;
				std::string getEndTime()const;
				std::string getQosPolicyId()const;
				std::string getSourcePortRange()const;
				std::string getSourceCidr()const;
				int getPriority()const;
				std::string getStartTime()const;
				std::string getDestPortRange()const;
				std::vector<std::string> getDpiGroupIds()const;
				std::string getName()const;
				std::string getDestCidr()const;
				std::vector<std::string> getDpiSignatureIds()const;
				std::string getQosId()const;
				std::string getIpProtocol()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				std::string endTime_;
				std::string qosPolicyId_;
				std::string sourcePortRange_;
				std::string sourceCidr_;
				int priority_;
				std::string startTime_;
				std::string destPortRange_;
				std::vector<std::string> dpiGroupIds_;
				std::string name_;
				std::string destCidr_;
				std::vector<std::string> dpiSignatureIds_;
				std::string qosId_;
				std::string ipProtocol_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_CREATEQOSPOLICYRESULT_H_